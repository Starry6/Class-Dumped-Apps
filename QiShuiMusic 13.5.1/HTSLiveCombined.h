@interface HTSLiveCombined : IESLivePBBaseMessage
@property (nonatomic) NSMutableArray bindSubTicketListArray;
@property (nonatomic) Q bindSubTicketListArray_Count;
@property (nonatomic) HTSLiveParentProductSimpleData parentTicketPanelData;
@property (nonatomic) BOOL hasParentTicketPanelData;
+ (id)descriptor;
@end
