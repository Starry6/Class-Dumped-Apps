@interface AWETrackerParamsCheckItem : NSObject
@property (nonatomic) NSArray requiredFields;
@property (nonatomic) NSArray optionalFields;
- (BOOL)checkArray:ElementTypeIs:error:;
- (id)initWithRequiredFields:withOptionalFields:;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (id)requiredFields;
- (void)setRequiredFields:;
- (id)optionalFields;
- (void)setOptionalFields:;
@end
