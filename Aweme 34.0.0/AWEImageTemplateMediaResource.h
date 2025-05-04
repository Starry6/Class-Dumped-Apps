@interface AWEImageTemplateMediaResource : NSObject
@property (nonatomic) q resourceType;
@property (nonatomic) NSString mediaID;
@property (nonatomic) NSString embed;
@property (nonatomic) q isBuildin;
- (long long)isBuildin;
- (void)setIsBuildin:;
- (id)embed;
- (void)setEmbed:;
- (long long)resourceType;
- (void)setResourceType:;
- (void).cxx_destruct;
- (id)mediaID;
- (void)setMediaID:;
@end
