@interface AWERTLManager : NSObject
@property (nonatomic) BOOL enableRTL;
@property (nonatomic) NSSet flipImageNames;
- (BOOL)enableRTL;
- (void)setFlipImageNames:;
- (void)setEnableRTL:;
- (id)flipImageNames;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
