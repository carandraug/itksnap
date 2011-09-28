#ifndef UISTATE_H
#define UISTATE_H

/** A list of states that the Global UI may be in. Whenever any of these
  states changes, the UI issues a StateChangedEvent */
enum UIState {
  UIF_GRAY_LOADED,
  UIF_RGB_LOADED,
  UIF_BASEIMG_LOADED,  // i.e., Gray or RGB loaded
  UIF_OVERLAY_LOADED,  // i.e., Baseimg loaded and at least one overlay
  UIF_IRIS_ACTIVE,     // i.e., system in main interaction mode
  UIF_MESH_DIRTY,
  UIF_MESH_ACTION_PENDING,
  UIF_ROI_VALID,
  UIF_LINKED_ZOOM,
  UIF_UNDO_POSSIBLE,
  UIF_REDO_POSSIBLE,
  UIF_UNSAVED_CHANGES,
  UIF_MESH_SAVEABLE
};

#endif // UISTATE_H
