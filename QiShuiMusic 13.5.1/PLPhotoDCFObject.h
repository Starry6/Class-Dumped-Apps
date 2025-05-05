@interface PLPhotoDCFObject : NSObject
- (int)number;
- (long long)compare:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithName:number:;
- (void)setWriteIsPending:;
+ (id)validDCFNameForName:requiredLength:nameLength:number:numberRange:suffix:;
@end
