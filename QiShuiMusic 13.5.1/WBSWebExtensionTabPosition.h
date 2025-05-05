@interface WBSWebExtensionTabPosition : NSObject
@property (nonatomic) double windowID;
@property (nonatomic) Q index;
- (id)initWithTab:;
- (unsigned long long)index;
- (double)windowID;
@end
