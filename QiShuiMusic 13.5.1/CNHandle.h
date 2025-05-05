@interface CNHandle : NSObject
@property (nonatomic) NSString stringValue;
@property (nonatomic) NSString customIdentifier;
@property (nonatomic) Q type;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)customIdentifier;
- (unsigned long long)type;
- (id)stringValue;
- (void).cxx_destruct;
- (id)initWithStringValue:type:;
- (id)initWithStringValue:customIdentifier:type:;
+ (unsigned long long)handleTypeForPropertyKey:;
+ (id)keyTypeMapping;
+ (id)tuHandleForHandle:;
+ (long long)tuHandleTypeFromType:;
+ (id)tuHandleTypeMap;
+ (id)inPersonHandleForHandle:;
+ (long long)inPersonHandleTypeForType:;
+ (id)inPersonHandleTypeMap;
+ (id)geminiHandleForHandle:;
+ (long long)geminiHandleTypeForType:;
+ (id)geminiHandleTypeMap;
@end
