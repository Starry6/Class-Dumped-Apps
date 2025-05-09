@interface VEImage : NSObject
@property (nonatomic) q imageNativeHandle;
@property (nonatomic) {CGSize=dd} maxRenderSize;
@property (nonatomic) VEImagePreview surface;
@property (nonatomic) double scale;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} surfaceFrame;
@property (nonatomic) UIView preview;
@property (nonatomic) @? algorithmResultsCallback;
@property (nonatomic) @? mutilFrameCallback;
@property (nonatomic) Q algorithm;
- (int)addTextSticker:;
- (int)stickerSetScaleWithIndex:scale:;
- (void)endStickerBrush;
- (void)rotationWithDegree:anchorPoint:;
- (void)sendMsgToEffect:arg1:arg2:arg3:;
- (void)setLayerCanvasRect:ldy:rux:ruy:;
- (int)stickerSetAlphaWithIndex:alpha:;
- (int)addBrushSticker:;
- (void)addEffectHDRFilterWithPath:intensity:;
- (void)addImageLayer:;
- (void)addImageLayerWithFrameFilePath:width:height:setupBlock:;
- (void)addImageLayerWithImage:setupBlock:;
- (int)addInfoStickerTemplate:param:;
- (void)addPanoramicLayer:panoramicPath:;
- (int)addStickerWithLayer:;
- (int)addStickerWithPath:param:;
- (int)addStickerWithPath:param:infoParams:;
- (int)addTextSticker:infoParams:;
- (void)addTransparentLayer:height:setupBlock:;
- (void)addVectorGraphicsWithParams:path:params:;
- (int)addVectorSticker:;
- (id)algorithmResultsCallback;
- (void)beginStickerBrus:;
- (id)cacheCurrentFrame:isScissor:;
- (void)cancelSelect:;
- (void)clearEffect;
- (void)clearLiquefyBuffer;
- (void)clearStickerBrush:;
- (void)contrastImage:;
- (id)convertBitmapRGBA8ToUIImage:withWidth:withHeight:withColorSpace:;
- (void)customContrastImage:isSave:;
- (void)cutoutImageWithFrame:isCanvas:;
- (void)deleteLayer:;
- (int)doInfoStickerRotate:degree:;
- (int)doInfoStickerTranslateWithScreenResolution:offsetX:offsetY:;
- (void)enableAnimateEffect:;
- (void)enableAnimateSticker:;
- (void)enableCanvas:canvasHeight:;
- (int)enableImageMatting:matting:;
- (int)enableLayerShow:;
- (void)enableLensHdr:;
- (void)enableOpenGL3:;
- (void)enableRenderAutomation:;
- (void)enableRenderInTimer:;
- (void)enableUndoRedo;
- (void)executeConfirm;
- (void)executeConfirmParams;
- (id)getCurrentImage:isPanoramic:;
- (id)getCurrentImageWithFormat:format:compression:;
- (id)getCurrentLayerSize;
- (id)getCurrentSelectLayerId;
- (id)getImagePixelColorWithPoint:size:;
- (id)getInfoStickerBoundingBoxWithScreenResolution:needScale:;
- (id)getInfoStickerPositionWithIndex:;
- (id)getLastUndoCommand;
- (id)getStickerBoundingBoxWitnIndex:needScale:;
- (void)getStickerBrushState:undoCount:redoCount:strokeSize:boundingBox:;
- (id)getUndoRedoList:;
- (id)getVectorCurrentGraphics:;
- (id)getVectorGraphicsParamsWithId:geometryID:;
- (id)imageFromCVPixelBuffer:;
- (long long)imageNativeHandle;
- (void)initLensHdrEngine:count:infoBuffer:;
- (void)initPreviewSurface;
- (id)initWithMaxRenderSize:useNewLooper:;
- (id)initWithNewLooper:;
- (BOOL)isBrushOverlapped:left:top:right:bottom:;
- (BOOL)isBrushOverlappedWithPath:bounds:;
- (id)maxRenderSize;
- (id)mutilFrameCallback;
- (void)nativeEnableMmap:;
- (id)nativeGetInfoStickerTemplateParam:;
- (void)nativeResetEffectEngine;
- (void)nativeUpdateAlgorithmCache;
- (void)processGestureWithPath:commandID:type:point:offset:factor:etc:;
- (BOOL)queryCurrentLayerExist;
- (id)queryCurrentLayerFrame;
- (id)queryCurrentLayerFrame:isLayerInCanvas:;
- (void)redoWithIndex:hasScissorNode:;
- (void)registerAlgorithmResultsCallback:algorithm:;
- (void)registerMutilFrameResults:;
- (void)removeBackGroundImage;
- (void)removeComposerWithPath:tagName:value:;
- (void)removeComposerWithoutUndoWithPath:tagName:;
- (int)removeMagnifier:;
- (int)removeStickerWithIndex:;
- (void)removeVectorGraphicsWithId:geometryID:;
- (void)renderLayerQueue;
- (void)renderLayerQueueForceSync;
- (void)replaceImageLayerWithImage:setupBlock:;
- (void)requestImageRenderAlgorithmWithImage:;
- (void)requestRenderAlgorithm;
- (void)rotationCanvasWithDegree:anchorPoint:;
- (BOOL)saveCurrentImageWithFormatToPath:type:format:compression:;
- (void)saveFinalDisplayLayerInfo;
- (void)saveFinishLoadLayerInfo;
- (void)scaleCanvasWithScale:anchor:;
- (void)scaleWithScale:anchor:;
- (void)selectWithCoordWithIndex:;
- (void)selectWithCoordWithPosition:;
- (void)setAlgorithmResultsCallback:;
- (void)setBackgroundBoxCount:;
- (void)setBackgroundImage:width:height:;
- (void)setColorPrimaries:TransferFunction:YCbCrMatrix:;
- (void)setComposerResource:;
- (void)setComposerSlideFilter:pathTwo:intensity:progress:;
- (void)setComposerWithPath:tagName:tagValue:;
- (void)setComposersWithPath:tagName:tagValues:;
- (void)setCurrentLayerNeedAlgorithm:;
- (void)setEffectTextureCachePathAndSize:memSize:cacheSize:;
- (void)setFBeautify:;
- (void)setImageNativeHandle:;
- (int)setInfoStickerAnimNewWithIndex:type:anim_path:duration:;
- (int)setInfoStickerAnimParamWithIndex:type:params:;
- (void)setMaxRenderSize:;
- (void)setMutilFrameCallback:;
- (void)setOneValueFilterWithType:path:value:;
- (void)setPaintBrushEnableWithPath:tagName:enable:;
- (void)setPaintBrushStrokeColorWithPath:color:;
- (void)setRenderTimerFrameRate:type:;
- (int)setSmartMattingMask:width:height:index:;
- (void)setStickerBrushParams:;
- (void)setStickerBrushResource:;
- (void)setSurfaceFrame:;
- (void)setVectorGraphicsBrushEnable:enable:;
- (int)stickerSetOrderInLayer:order:;
- (int)stickerSetPositonWithIndex:point:;
- (int)stickerSetRotationWithIndex:rotation:;
- (id)surfaceFrame;
- (void)switchFilterWithPathOne:pathOne:pathTwo:intensity:progress:;
- (void)translateCanvasWithOffset:;
- (void)translateWithOffset:;
- (void)unRegisterAlgorithmAlgorithm:;
- (void)undoRedoBursh:isUndo:;
- (void)undoRedoStickerBrush:entityIndex:;
- (void)undoRedoVectorGraphics:isUndo:;
- (void)undoWithIndex:hasScissorNode:;
- (void)updateComposerNodeWithPath:tagName:tagValue:;
- (int)updateInfoStickerTemplateParam:json:;
- (int)updateMagnifierWithPoint:radius:passEffectRender:;
- (void)updatePaintParamsWithPath:config:;
- (int)updateTextSticker:json:;
- (void)updateVectorGraphicsParamsWithId:geometryID:geometryParams:isMilestone:;
- (id)surface;
- (unsigned long long)algorithm;
- (id)init;
- (void)setBackgroundColor:;
- (void)dealloc;
- (void)setScale:;
- (void).cxx_destruct;
- (id)preview;
- (double)scale;
- (void)setSurface:;
- (void)renderEffect;
@end
