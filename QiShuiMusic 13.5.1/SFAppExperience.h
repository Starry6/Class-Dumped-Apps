@interface SFAppExperience : NSManagedObject
@property (nonatomic) NSDate firstTimeStamp;
@property (nonatomic) NSDate timeStamp;
@property (nonatomic) double algosScore;
@property (nonatomic) NSInteger algosSamples;
@property (nonatomic) SFApp hasApp;
+ (id)entityName;
+ (id)fetchRequest;
@end
