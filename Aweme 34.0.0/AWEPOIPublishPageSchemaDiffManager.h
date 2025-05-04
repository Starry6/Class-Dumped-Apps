@interface AWEPOIPublishPageSchemaDiffManager : NSObject
@property (nonatomic) NSDictionary inSchemaParams;
@property (nonatomic) NSDictionary outSchemaParams;
@property (nonatomic) NSString business;
@property (nonatomic) NSString location;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setInSchemaParams:;
- (void)setOutSchemaParams:;
- (id)inSchemaParams;
- (id)outSchemaParams;
- (void)updateBusiness:inSchemaParams:;
- (void)updateOutSchemaParams:;
- (void)trackSchemaDiff:;
- (id)trackParamKeys;
- (id)securityAuditTrackParamKeys;
- (id)init;
- (id)location;
- (void)setLocation:;
- (void)clear;
- (void).cxx_destruct;
- (id)business;
- (void)setBusiness:;
+ (id)sharedInstance;
@end
