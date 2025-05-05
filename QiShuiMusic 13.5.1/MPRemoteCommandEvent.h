@interface MPRemoteCommandEvent : NSObject
@property (nonatomic) I mediaRemoteCommandType;
@property (nonatomic) NSDictionary mediaRemoteOptions;
@property (nonatomic) NSString contextID;
@property (nonatomic) NSString commandID;
@property (nonatomic) NSString interfaceID;
@property (nonatomic) NSString sourceID;
@property (nonatomic) NSString contentItemID;
@property (nonatomic) q playbackQueueOffset;
@property (nonatomic) double timeout;
@property (nonatomic) MPRemoteCommand command;
@property (nonatomic) double timestamp;
- (id)init;
- (id)sourceID;
- (id)contextID;
- (id)command;
- (void).cxx_destruct;
- (double)timestamp;
- (double)timeout;
- (id)description;
- (id)contentItemID;
- (long long)playbackQueueOffset;
- (id)commandID;
- (id)mediaRemoteOptions;
- (id)initWithCommand:mediaRemoteType:options:;
- (unsigned int)mediaRemoteCommandType;
- (id)interfaceID;
+ (id)eventWithCommand:mediaRemoteType:options:;
@end
