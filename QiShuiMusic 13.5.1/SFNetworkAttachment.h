@interface SFNetworkAttachment : NSManagedObject
@property (nonatomic) NSNumber attrs;
@property (nonatomic) NSDate firstTimeStamp;
@property (nonatomic) NSString identifier;
@property (nonatomic) BOOL isHotSpot;
@property (nonatomic) BOOL isKnownGood;
@property (nonatomic) BOOL isKnownSporadic;
@property (nonatomic) BOOL isLowInternetDL;
@property (nonatomic) BOOL isLowInternetUL;
@property (nonatomic) NSNumber kind;
@property (nonatomic) NSData netSignature;
@property (nonatomic) NSNumber overallStayMean;
@property (nonatomic) NSNumber overallStayVar;
@property (nonatomic) NSString service;
@property (nonatomic) NSDate timeStamp;
@property (nonatomic) NSNumber velo;
@property (nonatomic) BOOL wasLastFailed;
@property (nonatomic) NSSet hasDefaultRoute;
@property (nonatomic) NSSet supportsFlows;
+ (id)entityName;
+ (id)fetchRequest;
@end
