@interface AWEVideoEditorFactory : NSObject
+ (id)videoEditorWithModel:cancelBlock:;
+ (id)videoEditorWithModel:playImmediately:;
+ (id)videoEditorWithModel:musicList:playImmediately:cancelBlock:;
+ (id)openEditorWithModel:;
+ (id)videoEditorWithModel:;
+ (id)videoEditorWithModel:showGuideBubble:playImmediately:cancelBlock:;
+ (id)videoEditorWithModel:musicList:showGuideBubble:playImmediately:cancelBlock:;
+ (id)p_featureTypesFromFeatureEditor:;
+ (id)videoEditorWithModel:showGuideBubble:;
@end
