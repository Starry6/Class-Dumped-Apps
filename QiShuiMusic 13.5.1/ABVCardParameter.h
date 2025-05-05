@interface ABVCardParameter : NSObject
- (void)dealloc;
- (BOOL)isPrimary;
- (void)addTypes:;
- (id)types;
- (id)initWithName:;
- (void)setValue:;
- (void)setGrouping:;
- (id)description;
- (id)value;
- (id)name;
- (id)grouping;
- (void)setIsPrimary:;
- (void)addType:;
@end
