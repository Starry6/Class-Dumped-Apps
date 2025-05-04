@interface AWEPublishAnchorUtilsService : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isAIEffectAnchor:;
- (BOOL)isImageTemplateEffectAnchor:;
- (BOOL)isImageTemplateAnchor:;
- (BOOL)isOpenPlatformAnchorWithID:;
- (BOOL)isUploadEffectAnchor:;
- (BOOL)shouldIgnoreUploadPropId:;
- (BOOL)isSourceInfoAnchor:;
- (BOOL)enable:;
@end
