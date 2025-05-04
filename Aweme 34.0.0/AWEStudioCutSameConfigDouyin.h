@interface AWEStudioCutSameConfigDouyin : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelCreateCutSameMVVideo;
- (void)createCutSameMVTemplateWithTemplateId:withInfo:completion:;
- (void)createCutSameMVVideoWithTemplateId:assetPathList:withInfo:progressBlock:completion:;
@end
