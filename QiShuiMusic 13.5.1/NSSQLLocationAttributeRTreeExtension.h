@interface NSSQLLocationAttributeRTreeExtension : NSObject
@property (nonatomic) NSArray insertSQLStrings;
@property (nonatomic) NSArray dropSQLStrings;
@property (nonatomic) NSArray bulkUpdateSQLStrings;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (BOOL)validate:;
- (id)initWithObjectFromUserInfo:onAttributeNamed:onEntity:;
- (id)dropSQLStrings;
- (BOOL)isEqualToExtension:;
- (id)insertSQLStrings;
- (id)bulkUpdateSQLStrings;
@end
