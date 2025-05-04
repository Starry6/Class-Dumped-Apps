@interface AWEMixVideoShareManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)popMixShareOn:withMixModel:mixVideos:previousPage:currentVideo:pageType:logExtraDict:;
+ (id)mixButtonTitleWithModel:;
+ (void)mixButtonDidClickWithModel:enterFrom:completionBlock:;
+ (void)enterCreateMixPageWithEnterFrom:params:;
+ (void)enterManagerMixPageWithModels:enterFrom:enterMethod:;
+ (void)enterManagerMixPageWithModel:enterFrom:enterMethod:;
+ (void)enterModifyMixPageWithModel:enterFrom:completionBlock:;
@end
