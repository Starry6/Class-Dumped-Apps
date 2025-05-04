@interface AWEPublishEffectAnchorProvider : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAnchorInfoIfNeeded:;
- (id)anchorTag:isImageTemplateEffect:;
- (id)anchorContent:;
+ (BOOL)isAIEffectAnchor:;
+ (BOOL)isImageTemplateEffectAnchor:;
+ (BOOL)isUploadEffectAnchor:;
+ (id)imageTemplateEffectIds:;
+ (id)stickerID:;
@end
