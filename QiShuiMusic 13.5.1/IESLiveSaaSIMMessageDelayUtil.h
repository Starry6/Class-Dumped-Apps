@interface IESLiveSaaSIMMessageDelayUtil : NSObject
+ (double)getAnchorSendIMTimeStampWithDict:;
+ (id)getExtraDictWithMsg:error:;
+ (BOOL)getIsNeedDelayIMWithDict:;
+ (double)getServerTimeWithRoom:;
@end
