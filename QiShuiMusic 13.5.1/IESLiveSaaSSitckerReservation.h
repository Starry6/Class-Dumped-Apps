@interface IESLiveSaaSSitckerReservation : BDDynamicMTLModel
@property (nonatomic) NSNumber appointmentId;
@property (nonatomic) NSNumber anchorId;
@property (nonatomic) NSNumber roomId;
@property (nonatomic) NSNumber startTime;
@property (nonatomic) NSNumber endTime;
@property (nonatomic) NSArray btnRect;
@property (nonatomic) NSString btnColor;
@property (nonatomic) BOOL isReservation;
@property (nonatomic) BOOL hasCorretReservStatus;
@property (nonatomic) NSString finishContent;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)JSONKeyPathsByPropertyKey;
@end
