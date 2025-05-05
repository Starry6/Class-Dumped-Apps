@interface IESLiveMVBaseInfo : IESLivePBBaseMessage
@property (nonatomic) NSString vid;
@property (nonatomic) NSString coverURL;
@property (nonatomic) NSString title;
@property (nonatomic) NSInteger duration;
@property (nonatomic) IESLiveMVUrlStruct downloadAddr;
@property (nonatomic) BOOL hasDownloadAddr;
+ (id)descriptor;
@end
