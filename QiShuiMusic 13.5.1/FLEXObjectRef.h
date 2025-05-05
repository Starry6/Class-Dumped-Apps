@interface FLEXObjectRef : NSObject
@property (nonatomic) BOOL wantsSummary;
@property (nonatomic) NSString reference;
@property (nonatomic) NSString summary;
@property (nonatomic) @ object;
- (id)initWithObject:ivarName:showSummary:retained:;
- (id)summary;
- (void)retainObject;
- (void)releaseObject;
- (id)debugDescription;
- (id)reference;
- (id)object;
- (BOOL)wantsSummary;
- (void).cxx_destruct;
+ (id)unretained:;
+ (id)unretained:ivar:;
+ (id)retained:;
+ (id)retained:ivar:;
+ (id)referencing:retained:;
+ (id)referencing:ivar:retained:;
+ (id)referencing:showSummary:retained:;
+ (id)referencingAll:retained:;
+ (id)referencingClasses:;
@end
