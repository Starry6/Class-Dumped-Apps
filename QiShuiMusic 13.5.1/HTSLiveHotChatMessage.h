@interface HTSLiveHotChatMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString title;
@property (nonatomic) NSString content;
@property (nonatomic) GPBInt64Array numArray;
@property (nonatomic) Q numArray_Count;
@property (nonatomic) q duration;
@property (nonatomic) GPBInt64Array showDurationArray;
@property (nonatomic) Q showDurationArray_Count;
@property (nonatomic) q sequenceId;
@property (nonatomic) NSMutableArray hotListArray;
@property (nonatomic) Q hotListArray_Count;
@property (nonatomic) HTSLiveText rtfContent;
@property (nonatomic) BOOL hasRtfContent;
@property (nonatomic) q chatContentType;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
