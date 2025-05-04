@interface AWEPublishTemplateAnchorProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAnchorInfoIfNeeded:;
+ (BOOL)isImageTemplateAnchor:;
+ (id)mvIDWithPublishModel:;
+ (BOOL)isUploadTemplate:;
+ (long long)mvTypeWithPublishModel:mvID:;
+ (id)miscInfoDictWithPublishModel:;
@end
