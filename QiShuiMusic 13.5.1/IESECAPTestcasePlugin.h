@interface IESECAPTestcasePlugin : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)receive:pathID:;
- (void)actionPathEnd:;
- (void)actionPathStart:;
- (void)receive:;
- (void)verifyActionNode:pathID:;
- (void)verifyActionPathEndWithPathID:;
- (void)verifyActionPathStart:pathID:;
- (id)init;
- (void).cxx_destruct;
@end
