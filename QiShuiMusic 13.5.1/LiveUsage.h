@interface LiveUsage : NSManagedObject
@property (nonatomic) NSNumber allFlows;
@property (nonatomic) NSDate billCycleEnd;
@property (nonatomic) NSNumber jumboFlows;
@property (nonatomic) NSNumber kind;
@property (nonatomic) NSNumber metadata;
@property (nonatomic) NSNumber tag;
@property (nonatomic) NSDate timeStamp;
@property (nonatomic) NSNumber wifiIN;
@property (nonatomic) NSNumber wifiIN_exp;
@property (nonatomic) NSNumber wifiOUT;
@property (nonatomic) NSNumber wifiOUT_exp;
@property (nonatomic) NSNumber wiredIN;
@property (nonatomic) NSNumber wiredIN_exp;
@property (nonatomic) NSNumber wiredOUT;
@property (nonatomic) NSNumber wiredOUT_exp;
@property (nonatomic) NSNumber wwanIN;
@property (nonatomic) NSNumber wwanIN_exp;
@property (nonatomic) NSNumber wwanOUT;
@property (nonatomic) NSNumber wwanOUT_exp;
@property (nonatomic) NSNumber xIN;
@property (nonatomic) NSNumber xIN_exp;
@property (nonatomic) NSNumber xOUT;
@property (nonatomic) NSNumber xOUT_exp;
@property (nonatomic) Process hasProcess;
@property (nonatomic) Process hintedBy;
+ (id)entityName;
+ (id)fetchRequest;
@end
