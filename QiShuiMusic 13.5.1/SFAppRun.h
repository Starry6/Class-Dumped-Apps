@interface SFAppRun : NSManagedObject
@property (nonatomic) NSNumber kind;
@property (nonatomic) NSDate timeEnd;
@property (nonatomic) NSDate timeStart;
@property (nonatomic) NSNumber wifiIN_end;
@property (nonatomic) NSNumber wifiIN_start;
@property (nonatomic) NSNumber wifiOUT_end;
@property (nonatomic) NSNumber wifiOUT_start;
@property (nonatomic) NSNumber wiredIN_end;
@property (nonatomic) NSNumber wiredIN_start;
@property (nonatomic) NSNumber wiredOUT_end;
@property (nonatomic) NSNumber wiredOUT_start;
@property (nonatomic) NSNumber wwanIN_end;
@property (nonatomic) NSNumber wwanIN_start;
@property (nonatomic) NSNumber wwanOUT_end;
@property (nonatomic) NSNumber wwanOUT_start;
@property (nonatomic) SFApp hasApp;
+ (id)entityName;
+ (id)fetchRequest;
@end
