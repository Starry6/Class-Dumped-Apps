@interface FLEXSearchToken : NSObject
@property (nonatomic) NSString string;
@property (nonatomic) Q options;
@property (nonatomic) BOOL isAbsolute;
@property (nonatomic) BOOL isAny;
@property (nonatomic) BOOL isEmpty;
- (BOOL)isAbsolute;
- (BOOL)isAny;
- (BOOL)isEmpty;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)string;
- (unsigned long long)options;
- (void).cxx_destruct;
+ (id)any;
+ (id)string:options:;
@end
