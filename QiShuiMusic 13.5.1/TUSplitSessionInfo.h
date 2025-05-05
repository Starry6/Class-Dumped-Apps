@interface TUSplitSessionInfo : NSObject
@property (nonatomic) NSUUID conversationID;
@property (nonatomic) TUNearbyDeviceHandle device;
@property (nonatomic) TUNeighborhoodHandoffContext handoffContext;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)conversationID;
- (id)device;
- (id)handoffContext;
- (id)initWithConversationID:device:handoffContext:;
+ (BOOL)supportsSecureCoding;
@end
