@interface IESLiveSaaSPBMatchHotMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) NSString content;
@property (nonatomic) q count;
@property (nonatomic) q sequenceId;
@property (nonatomic) NSInteger group;
@property (nonatomic) q iconIndex;
@property (nonatomic) q triggerTimestamp;
+ (id)descriptor;
@end
