@interface BDXLynxNumberKeyListener : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)checkCharIsInCharacterSet:character:;
- (id)filter:start:end:dest:dstart:dend:;
- (id)getAcceptedChars;
- (id)init;
- (long long)getInputType;
@end
