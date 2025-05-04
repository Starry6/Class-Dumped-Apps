@interface AWEStoryAdaptInfiniUtil : NSObject
+ (void)shareImagePrepareForInfini:image:firstFrameImage:;
+ (void)shareVideoPrepareForInfini:firstFrameImage:;
+ (BOOL)quickShareImagePrepareForInfini:image:firstFrameImage:;
+ (BOOL)canRecoverFromDraft:;
@end
