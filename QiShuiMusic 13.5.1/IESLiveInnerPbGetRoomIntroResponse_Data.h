@interface IESLiveInnerPbGetRoomIntroResponse_Data : GPBMessage
@property (nonatomic) BOOL introSwitch;
@property (nonatomic) NSMutableDictionary defaultLabels;
@property (nonatomic) Q defaultLabels_Count;
@property (nonatomic) NSMutableArray labelsArray;
@property (nonatomic) Q labelsArray_Count;
@property (nonatomic) NSString introduction;
@property (nonatomic) BOOL isTemplate;
+ (id)descriptor;
@end
