@interface MTLTypeInternal : MTLType
- (void)dealloc;
- (id)formattedDescription:;
- (unsigned long long)dataType;
- (id)description;
- (id)initWithDataType:;
@end
