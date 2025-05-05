@interface IESECTaskInfo : GPBMessage
@property (nonatomic) NSInteger taskType;
@property (nonatomic) NSInteger taskStatus;
@property (nonatomic) NSString reportEvent;
@property (nonatomic) IESECBrowseInfo browseTaskInfo;
@property (nonatomic) BOOL hasBrowseTaskInfo;
+ (id)descriptor;
@end
