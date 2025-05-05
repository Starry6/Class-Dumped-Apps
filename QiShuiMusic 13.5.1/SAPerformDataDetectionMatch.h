@interface SAPerformDataDetectionMatch : SABaseCommand
@property (nonatomic) NSString dataDetectionType;
@property (nonatomic) NSNumber length;
@property (nonatomic) NSNumber location;
@property (nonatomic) NSString value;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)location;
- (void)setValue:;
- (id)encodedClassName;
- (void)setLocation:;
- (id)value;
- (id)length;
- (void)setLength:;
- (id)dataDetectionType;
- (void)setDataDetectionType:;
+ (id)performDataDetectionMatch;
+ (id)performDataDetectionMatchWithDictionary:context:;
@end
