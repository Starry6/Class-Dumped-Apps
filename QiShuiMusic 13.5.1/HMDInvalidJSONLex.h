@interface HMDInvalidJSONLex : NSObject
- (BOOL)isADigit:;
- (id)readANumberTokenWithString:atIndex:;
- (id)readAStringTokenWithString:atIndex:;
- (BOOL)readFalseTokenWithString:atIndex:;
- (BOOL)readTrueTokenWithString:atIndex:;
- (id)tokensWithString:;
@end
