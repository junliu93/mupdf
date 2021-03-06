#ifndef MUPDF_FITZ_ANNOTATION_H
#define MUPDF_FITZ_ANNOTATION_H

#include "mupdf/fitz/system.h"
#include "mupdf/fitz/context.h"
#include "mupdf/fitz/geometry.h"
#include "mupdf/fitz/document.h"

/*
	fz_new_annot: Create and initialize an annotation struct.
*/
void *fz_new_annot(fz_context *ctx, int size);

/*
	fz_keep_annot: Take a new reference to an annotation.
*/
fz_annot *fz_keep_annot(fz_context *ctx, fz_annot *annot);

/*
	fz_drop_annot: Drop a reference to an annotation. If the
	reference count reaches zero, annot will be destroyed.
*/
void fz_drop_annot(fz_context *ctx, fz_annot *annot);

/*
	fz_first_annot: Return a pointer to the first annotation on a page.

	Does not throw exceptions.
*/
fz_annot *fz_first_annot(fz_context *ctx, fz_page *page);

/*
	fz_next_annot: Return a pointer to the next annotation on a page.

	Does not throw exceptions.
*/
fz_annot *fz_next_annot(fz_context *ctx, fz_annot *annot);

/*
	fz_bound_annot: Return the bounding rectangle of the annotation.

	Does not throw exceptions.
*/
fz_rect *fz_bound_annot(fz_context *ctx, fz_annot *annot, fz_rect *rect);

#endif
