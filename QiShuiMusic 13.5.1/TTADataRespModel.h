@interface TTADataRespModel : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)errcode;
- (id)errmsg;
- (id)toDictionary;
- (id)initWithDictionary:error:;
- (id)valueForUndefinedKey:;
- (void)setValue:forUndefinedKey:;
+ (BOOL)propertyIsOptional:;
@end
