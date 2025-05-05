@interface AnnieTraceEventImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)traceBeginSectionWithName:debugInfo:;
- (void)traceEndSectionWithName:;
- (void)traceInstantWithName:;
+ (id)provideAnnieTraceEventProtocol:;
+ (void)loadSwizzled;
+ (id)sharedInstance;
@end
