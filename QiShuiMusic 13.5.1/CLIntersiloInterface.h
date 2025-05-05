@interface CLIntersiloInterface : NSObject
- (void)extendSelectorInfoWithProtocol:bases:;
- (id)getInfoForSelector:;
+ (id)sharedInterface;
@end
