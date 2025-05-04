@interface AWESECDataTessaReporter : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_handleTessaEvent:;
- (void)_handlePerfEvent:;
- (void)handleEvent:;
- (id)subscriberId;
@end
