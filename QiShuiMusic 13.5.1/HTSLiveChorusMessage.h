@interface HTSLiveChorusMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSInteger msgType;
@property (nonatomic) NSInteger contentOneOfCase;
@property (nonatomic) HTSLiveOpenChorusContent openChorusContent;
@property (nonatomic) HTSLiveCloseChorusContent closeChorusContent;
@property (nonatomic) HTSLiveChorusOrderedSongListChangeContent chorusOrderedSongListChangeContent;
+ (id)descriptor;
@end
