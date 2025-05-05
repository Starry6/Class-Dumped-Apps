@interface BSServiceQuality : NSObject
@property (nonatomic) I serviceClass;
@property (nonatomic) NSInteger relativePriority;
- (unsigned int)serviceClass;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (int)relativePriority;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)background;
+ (id)userInteractive;
+ (id)main;
+ (id)userInitiated;
+ (id)utility;
+ (id)serviceWithClass:;
+ (id)serviceWithClass:relativePriority:;
@end
