@interface IESLiveSaaSPBShowWatchInfoMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString desc;
@property (nonatomic) NSString count;
@property (nonatomic) NSString countWithBackup;
+ (id)descriptor;
@end
