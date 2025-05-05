@interface CNMultiValueDiff : NSObject
@property (nonatomic) NSArray updates;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)description;
- (id)updates;
- (id)initWithUpdates:;
- (id)multiValueByApplyToMultiValue:withIdentifierMap:;
- (BOOL)applyToABPerson:propertyDescription:isUnified:logger:error:;
+ (id)emptyDiff;
+ (id)diffMultiValue:toMultiValue:;
@end
