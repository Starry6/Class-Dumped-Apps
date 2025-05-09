@interface PDFPageView : UIView
@property (nonatomic) BOOL overlayViewInstalled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)page;
- (void)addAnnotation:;
- (void)_updateBackgroundColor;
- (void)dealloc;
- (void)setFrame:;
- (id)tableView:cellForRowAtIndexPath:;
- (id)hitTest:withEvent:;
- (id)backgroundImage;
- (void)clearTiles;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)removeAnnotation:;
- (void)setHidden:;
- (BOOL)isVisible;
- (void)willMoveToSuperview:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (long long)numberOfComponentsInPickerView:;
- (long long)pickerView:numberOfRowsInComponent:;
- (id)pickerView:viewForRow:forComponent:reusingView:;
- (void)pickerView:didSelectRow:inComponent:;
- (BOOL)hasBackgroundImage;
- (id)activeAnnotation;
- (void)_didRotatePageNotification:;
- (void)addControlForAnnotation:;
- (void)removeControlForAnnotation:;
- (void)_rotateActiveAnnotation;
- (void)addMarkupWithStyle:forIndexSet:;
- (id)markupAnnotationsForIndexSet:;
- (long long)displayBox;
- (void)setEnableTileUpdates:;
- (id)renderingProperties;
- (void)setBackgroundImage:atBackgroundQuality:;
- (id)pageLayer;
- (id)geometryInterface;
- (unsigned long long)visibilityDelegateIndex;
- (id)initWithPage:geometryInterface:andRenderingProperties:;
- (void)setNeedsTilesUpdate;
- (void)addPageLayerEffect:;
- (void)removePageLayerEffectForID:;
- (id)pageLayerEffectForID:;
- (void)updatePageLayerEffectForID:;
- (void)updatePageLayerEffects;
- (id)layerEffectTransform;
- (void)scalePageLayerEffects:;
- (BOOL)enablesTileUpdates;
- (void)forceTileUpdate;
- (void)saveOriginalTileLayout;
- (void)restoreOriginalTileLayout;
- (void)applyTileLayoutScale:;
- (void)setVisibilityDelegateIndex:;
- (void)_formChanged:;
- (void)_choiceWidgetDone;
- (int)backgroundImageQuality;
- (void)setSearchSelections:;
- (void)addSearchSelection:;
- (void)previewRotatePage:;
- (void)hideTileLayer:;
- (void)colorWidgetBackgrounds:;
- (void)updateAnnotation:;
- (void)_updateAnnotationVisibility:;
- (void)_setupBookmarkLayer;
- (void)addBookmark;
- (void)removeBookmark;
- (void)updateBookmark;
- (void)_setuppageAnnotationEffects;
- (void)_updateWidgetControl:forBounds:;
- (id)convertRectToPageView:;
- (id)_rotationTransformForPageView;
- (id)convertPointToPageView:;
- (void)_addPDFAnnotationTextWidget:;
- (void)_addPDFAnnotationChoiceWidget:;
- (void)_addPDFAnnotationStampSignature:;
- (void)_addPDFAnnotation:;
- (BOOL)_allowsFormFieldEntry;
- (void)_setAttributedStringForAnnotation:stringValue:textView:;
- (BOOL)_shouldReplaceStringOnAnnotation:withTextView:;
- (void)setStringValue:onTextWidgetAnnotation:withTextView:;
- (void)setStringValue:onChoiceWidgetAnnotation:withTextField:;
- (void)setStringValue:onChoiceWidgetAnnotation:withTableView:;
- (void)setState:onButtonWidgetAnnotation:;
- (BOOL)isOverlayViewInstalled;
- (void)setOverlayViewInstalled:;
@end
