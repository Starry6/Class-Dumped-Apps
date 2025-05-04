@interface AWEMRSideBarNoticeBadgeInfoModel : NSObject
@property (nonatomic) NSString bussinessId;
@property (nonatomic) BOOL needHide;
@property (nonatomic) Q uiStyle;
@property (nonatomic) q badgeCnt;
@property (nonatomic) NSDictionary templateInfoDict;
@property (nonatomic) double noticeSendTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBussinessId:;
- (id)bussinessId;
- (BOOL)needHide;
- (id)templateInfoDict;
- (long long)badgeCnt;
- (double)noticeSendTime;
- (void)setNoticeSendTime:;
- (void)setBadgeCnt:;
- (void)setTemplateInfoDict:;
- (void)setNeedHide:;
- (void)setUiStyle:;
- (id)description;
- (unsigned long long)uiStyle;
- (void).cxx_destruct;
@end
