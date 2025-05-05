@interface SNKShotLabel : NSObject
@property (nonatomic) q type;
- (id)init;
- (long long)type;
- (id)initAsNegativeLabel;
- (id)initAsPositiveLabel;
+ (id)new;
@end
