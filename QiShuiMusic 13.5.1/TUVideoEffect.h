@interface TUVideoEffect : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) UIImage thumbnailImage;
- (id)thumbnailImage;
- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithName:thumbnailImage:;
- (BOOL)isEqualToEffect:;
@end
