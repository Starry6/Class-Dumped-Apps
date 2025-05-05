@interface SAUINanoImageResource : SAUIImageResource
@property (nonatomic) BOOL backgroundNeeded;
@property (nonatomic) NSString imageDownloadType;
@property (nonatomic) SAUIDecoratedText monogram;
@property (nonatomic) NSString placeholderImage;
- (id)monogram;
- (void)setPlaceholderImage:;
- (id)groupIdentifier;
- (void)setMonogram:;
- (id)placeholderImage;
- (id)encodedClassName;
- (BOOL)backgroundNeeded;
- (void)setBackgroundNeeded:;
- (id)imageDownloadType;
- (void)setImageDownloadType:;
+ (id)nanoImageResource;
+ (id)nanoImageResourceWithDictionary:context:;
@end
