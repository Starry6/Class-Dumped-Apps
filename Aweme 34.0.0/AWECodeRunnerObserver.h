@interface AWECodeRunnerObserver : NSObject
@property (nonatomic) NSMutableSet processedMachoHeader;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bundleDidActived:machoHeader:fromBundle:enterTag:cost:;
- (id)processedMachoHeader;
- (BOOL)checkIfMachoHeaderProcessed:andSectionName:;
- (void)addProcessedMachoHeader:andSectionName:;
- (void)setProcessedMachoHeader:;
- (id)init;
- (void).cxx_destruct;
+ (BOOL)checkIfMachoHeaderProcessed:sectionName:;
+ (void)addProcessedMachoHeader:sectionName:;
+ (id)sharedSingleton;
@end
