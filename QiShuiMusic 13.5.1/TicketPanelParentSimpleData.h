@interface TicketPanelParentSimpleData : IESLivePBBaseMessage
@property (nonatomic) NSString ticketId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString subTitle;
@property (nonatomic) HTSLiveImage cover;
@property (nonatomic) BOOL hasCover;
@property (nonatomic) NSInteger ticketStatus;
@property (nonatomic) q viewRight;
@property (nonatomic) NSInteger bindSubTicketCount;
@property (nonatomic) NSMutableArray dataArray;
@property (nonatomic) Q dataArray_Count;
+ (id)descriptor;
@end
