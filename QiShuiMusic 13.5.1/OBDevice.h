@interface OBDevice : NSObject
@property (nonatomic) Q type;
@property (nonatomic) Q templateType;
@property (nonatomic) BOOL hasHomeButton;
- (void)setType:;
- (void)setTemplateType:;
- (unsigned long long)type;
- (unsigned long long)templateType;
- (BOOL)hasHomeButton;
- (unsigned long long)templateTypeForBoundsWidth:;
- (void)setHasHomeButton:;
+ (id)currentDevice;
@end
