@interface IESLiveLinkMicAudienceGetPaidInfoBeforeApplyResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) q numOfLink;
@property (nonatomic) float avgGrade;
@property (nonatomic) q paidCount;
@property (nonatomic) q limitedTime;
@property (nonatomic) NSMutableArray paidTagsArray;
@property (nonatomic) Q paidTagsArray_Count;
@property (nonatomic) NSString paidDesc;
@property (nonatomic) BOOL useMemberBenefits;
@property (nonatomic) q memberDiscountAmount;
@property (nonatomic) BOOL applicationReasonRequired;
@property (nonatomic) HTSLiveApplicationReasonContent applicationReasonContent;
@property (nonatomic) BOOL hasApplicationReasonContent;
@property (nonatomic) IESLivePaidLinkmicDiscountInfo discountInfo;
@property (nonatomic) BOOL hasDiscountInfo;
+ (id)descriptor;
@end
